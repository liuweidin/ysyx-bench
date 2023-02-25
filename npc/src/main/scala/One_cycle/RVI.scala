package One_cycle
import chisel3._
import chisel3.util._
object RVI_ALU extends paramete{
  def ADDI = BitPat("b????????????_?????_000_?????_0010011")
  def SLLI =BitPat("b000000?_?????_?????_001_?????_0010011")
  def AUIPC =  BitPat("b????????????_?????_???_?????_0010111")
  def LUI = BitPat("b????????????_?????_???_?????_0110111")
  def ORI = BitPat("b????????????_?????_110_?????_0010011")
  def JAL =BitPat("b????????????_?????_???_?????_1101111")

  def JALR = BitPat("b????????????_?????_000_?????_1100111")

  def LD = BitPat("b???????_?????_?????_011_?????_0000011")
  def SD = BitPat("b???????_?????_?????_011_?????_0100011")
  def LW = BitPat("b???????_?????_?????_010_?????_0000011")
  def ADDW = BitPat("b0000000_?????_?????_000_?????_0111011")
  def SUB = BitPat("b0100000_?????_?????_000_?????_0110011")
  def SLTIU = BitPat("b???????_?????_?????_011_?????_0010011")
  def BEQ = BitPat("b???????_?????_?????_000_?????_1100011")
  def BNE =BitPat("b???????_?????_?????_001_?????_1100011")
  def ADDIW = BitPat("b???????_?????_?????_000_?????_0011011")
  def ADD = BitPat("b0000000_?????_?????_000_?????_0110011")
  def SRAI = BitPat("b010000?_?????_?????_101_?????_0010011")
  def SH = BitPat("b???????_?????_?????_001_?????_0100011")
  def LBU =BitPat("b???????_?????_?????_100_?????_0000011")
  def AND = BitPat("b0000000_?????_?????_111_?????_0110011")
  def SLTU = BitPat("b0000000_?????_?????_011_?????_0110011")
  def XORI = BitPat("b???????_?????_?????_100_?????_0010011")
  def SLLW = BitPat("b0000000_?????_?????_001_?????_0111011")
  def ANDI = BitPat("b???????_?????_?????_111_?????_0010011")
  def OR =BitPat("b0000000_?????_?????_110_?????_0110011")
  def SB =BitPat("b??????? ????? ????? 000 ????? 01000 11")
  def SRLI = BitPat("b000000?_?????_?????_101_?????_0010011")
  def BGE = BitPat("b???????_?????_?????_101_?????_1100011")
  def SW = BitPat("b???????_?????_?????_010_?????_0100011")
  def MULW =BitPat("b0000001_?????_?????_000_?????_0111011")
  def DIVW = BitPat("b0000001_?????_?????_100_?????_0111011")
  def REMW = BitPat("b0000001_?????_?????_110_?????_0111011")
  def BLT = BitPat("b???????_?????_?????_100_?????_1100011")
  def SUBW = BitPat("b0100000_?????_?????_000_?????_0111011")
   def SLT =BitPat("b0000000_?????_?????_010_?????_0110011")
  def LH= BitPat("b???????_?????_?????_001_?????_0000011")
  def LHU = BitPat("b???????_?????_?????_101_?????_0000011")

  def Ebreak = BitPat("b0000000_00001_00000_000_00000_1110011")

  val table =Array(
      ADDI -> List(InstrType.InstrI,FUType.alu,ALUOPType.add,RD.write),
      SLLI -> List(InstrType.InstrI, FUType.shift, ALUOPType.sll,RD.write),
      AUIPC -> List(InstrType.InstrU,FUType.alu,ALUOPType.add,RD.write),
      LUI -> List(InstrType.InstrU,FUType.alu,ALUOPType.add,RD.write),
      ORI -> List(InstrType.InstrI,FUType.alu,ALUOPType.or,RD.write),
      JAL -> List(InstrType.InstrJ,FUType.jump,ALUOPType.jal,RD.write),
      JALR -> List(InstrType.InstrI,FUType.jump,ALUOPType.jalr,RD.write),
      LD -> List(InstrType.InstrI,FUType.mem,ALUOPType.ld,RD.write),
      SD -> List(InstrType.InstrS,FUType.mem,ALUOPType.sd,RD.NOP),
      LW -> List(InstrType.InstrI,FUType.mem,ALUOPType.lw,RD.write),
      ADDW -> List(InstrType.InstrR,FUType.alu,ALUOPType.addw,RD.write),
      SUB -> List(InstrType.InstrR,FUType.alu,ALUOPType.sub,RD.write),
      SLTIU -> List(InstrType.InstrI,FUType.compar,ALUOPType.sltiu,RD.write),
      BEQ -> List(InstrType.InstrB,FUType.branch,ALUOPType.beq,RD.NOP),
      BNE -> List(InstrType.InstrB,FUType.branch,ALUOPType.bne,RD.NOP),
      ADDIW -> List(InstrType.InstrI,FUType.alu,ALUOPType.addiw,RD.write),
      ADD -> List(InstrType.InstrR,FUType.alu,ALUOPType.add,RD.write),
      SRAI ->List(InstrType.InstrI,FUType.shift,ALUOPType.srai,RD.write),
      LBU ->List(InstrType.InstrI,FUType.mem,ALUOPType.lbu,RD.write),
      SH -> List(InstrType.InstrS,FUType.mem,ALUOPType.sh,RD.NOP),
      AND -> List(InstrType.InstrR,FUType.alu,ALUOPType.and,RD.write),
      SLTU -> List(InstrType.InstrR,FUType.compar,ALUOPType.sltiu,RD.write),//////////////
      XORI -> List(InstrType.InstrI,FUType.alu,ALUOPType.xor,RD.write),
      SLLW -> List(InstrType.InstrR,FUType.shift,ALUOPType.sllw,RD.write),
      ANDI -> List(InstrType.InstrI,FUType.alu,ALUOPType.and,RD.write),
      OR -> List(InstrType.InstrR,FUType.alu,ALUOPType.or,RD.write),
      SB -> List(InstrType.InstrS,FUType.mem,ALUOPType.sb,RD.NOP),
      SRLI -> List(InstrType.InstrI,FUType.shift,ALUOPType.srli,RD.write),
      BGE -> List(InstrType.InstrB,FUType.branch,ALUOPType.bge,RD.NOP),
      SW -> List(InstrType.InstrS,FUType.mem,ALUOPType.sw,RD.NOP),
      MULW ->List(InstrType.InstrR,FUType.alu,ALUOPType.mulw,RD.write),
      DIVW->List(InstrType.InstrR,FUType.alu,ALUOPType.divw,RD.write),
      REMW->List(InstrType.InstrR,FUType.alu,ALUOPType.remw,RD.write),
      BLT ->List(InstrType.InstrB,FUType.branch,ALUOPType.blt,RD.NOP),
      SUBW ->List(InstrType.InstrR,FUType.alu,ALUOPType.subw,RD.write),
      SLT ->List(InstrType.InstrR,FUType.compar,ALUOPType.slt,RD.write),
      LH ->List(InstrType.InstrI,FUType.mem,ALUOPType.lh,RD.write),
      LHU ->List(InstrType.InstrI,FUType.mem,ALUOPType.lhu,RD.write),
      Ebreak -> List(InstrType.InstrN,FUType.alu,ALUOPType.ebreak,RD.NOP),
  )
}


